//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class NSMutableArray, NSMutableDictionary, NSURL, Tuple2;

@interface FMPaintFilter : GPUImageFilter
{
    int mTriangleIndex[672];
    int mScaleIndex[29];
    int faceCenterIndex;
    NSMutableDictionary *mFacePointsMap;
    NSMutableArray *mMeshPaintPathList;
    int mVertexVBOHandle;
    int mVBOIndexHandle;
    int mInMeshAttribute;
    int mColorAttribute;
    int mFaceVertexAttribute;
    int mFilterSourceTexture2;
    int mFilterInputTextureUniform2;
    int mBrushTextureAttribute;
    int mFSAAPositionAttribHandle;
    int mFSAAImageUniformHandle;
    int mFSAATextureCoordAttribHandle;
    int mFSAAWidthUniformHandle;
    int mFSAAHeightUniformHandle;
    NSMutableArray *mVertexVBOData;
    NSMutableArray *mTextureVBOData;
    NSMutableArray *mColorVBOData;
    NSMutableArray *mInMeshVBOData;
    NSMutableArray *mVertexVBOIndexList;
    NSMutableDictionary *mTextureMap;
    NSMutableArray *vertexListArray;
    struct CGPoint *vertexList;
    int mVertexCount;
    float *mVertexBuffer;
    float mRed;
    float mGreen;
    float mBlue;
    char *imageData;
    int mTextureWidth;
    int mTextureHeight;
    Tuple2 *mRatio;
    NSURL *fileUrl;
    int fboWidth;
    int fboHeight;
    int resolutionWidth;
    int resolutionHeight;
    int mOffScreenFrameBuffer;
    int mOffScreenFrameTexture;
    float *mMergeTextureVertexBuffer;
    float *mMergeTextureTexCoords;
    int mMeshProgramId;
    int mFSAAProgramId;
    Tuple2 *mLineWidthVector;
    union _GLKMatrix3 mCCWRotate90Mat;
    NSMutableDictionary *mVertexTextureMap;
    float mLineWidthScale;
    int mStrideSize;
    int mTotalBytes;
    int mVertexStrideSize;
    int mInMeshStrideSize;
    int mTextureStrideSize;
    int mColorStrideSize;
    int mVAO;
    float *floatBuffer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)freeEx;
- (void)drawMesh;
- (int)createVertexArrayObject;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)updateCameraFacePoints:(struct CGPoint *)arg1 length:(int)arg2 roll:(float *)arg3 yaw:(float *)arg4 pitch:(float *)arg5;
- (void)loadPath;
- (void)savePath;
- (void)setNextPathColor:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)clearPath;
- (void)removeLastPath;
- (void)move:(struct CGPoint)arg1;
- (void)movePath:(struct CGPoint)arg1;
- (void)endPath;
- (void)startPath:(struct CGPoint)arg1;
- (void)constructPaintMesh;
- (void)addWithCacheVertexData:(id)arg1 textureData:(id)arg2 color:(id)arg3;
- (void)loadBrushMapAndTexture:(id)arg1 tex:(id)arg2;
- (void)setBitMap:(id)arg1;
- (void)onInit;
- (int)loadShader:(id)arg1 type:(int)arg2;
- (id)initWithVertexString:(id)arg1 shaderString:(id)arg2 fsaaShaderString:(id)arg3 brushImageUrl:(id)arg4 texUrl:(id)arg5 savedPath:(id)arg6 resolutionSize:(struct CGSize)arg7;
- (void)setColor:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)clear;
- (void)undoPainting;
- (void)updateWithFaceFeatures:(id)arg1;

@end

