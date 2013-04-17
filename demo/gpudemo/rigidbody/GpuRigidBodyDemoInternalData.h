#ifndef GPU_RIGIDBODY_INTERNAL_DATA_H
#define GPU_RIGIDBODY_INTERNAL_DATA_H

#include "basic_initialize/b3OpenCLUtils.h"
#include "parallel_primitives/host/btOpenCLArray.h"
#include "BulletCommon/b3Vector3.h"

struct	GpuRigidBodyDemoInternalData
{
	
	cl_kernel	m_copyTransformsToVBOKernel;

	btOpenCLArray<btVector4>*	m_instancePosOrnColor;

	class b3GpuRigidBodyPipeline* m_rigidBodyPipeline;

	class b3GpuNarrowPhase* m_np;
	class b3GpuSapBroadphase* m_bp;

	GpuRigidBodyDemoInternalData()
		:m_instancePosOrnColor(0),
		m_copyTransformsToVBOKernel(0),	m_rigidBodyPipeline(0),
		m_np(0),
		m_bp(0)
	{
	}
};

#endif//GPU_RIGIDBODY_INTERNAL_DATA_H
