//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FGGLSLProgram, GLKTextureInfo, NSArray, NSMutableData, NSString;

@interface FGParticleEmitter : NSObject
{
    FGGLSLProgram *particleShader;
    unsigned int inPositionAttrib;
    unsigned int inColorAttrib;
    unsigned int inTexCoordAttrib;
    int textureUniformLocation;
    int MPMtxUniformLocation;
    _Bool _active;
    _Bool _wrapX;
    _Bool _wrapY;
    unsigned int _maxParticles;
    float _angle;
    float _angleVariance;
    float _speed;
    float _speedVariance;
    float _radialAcceleration;
    float _radialAccelerationVariance;
    float _tangentialAcceleration;
    float _tangentialAccelerationVariance;
    float _randomForceProbability;
    float _particleLifespan;
    float _particleLifespanVariance;
    float _startParticleSize;
    float _startParticleSizeVariance;
    float _finishParticleSize;
    float _finishParticleSizeVariance;
    float _duration;
    float _rotationStart;
    float _rotationStartVariance;
    float _rotationEnd;
    float _rotationEndVariance;
    float _numberOfParticlesPerSource;
    float _fixedEmissionRate;
    unsigned int _blendFuncSource;
    unsigned int _blendFuncDestination;
    unsigned int _spriteDimensionCount;
    float _spriteAdvanceRate;
    unsigned int _allocatedParticleCount;
    unsigned int _usedParticleCount;
    unsigned int _numberOfActiveParticles;
    unsigned int _verticesID;
    float _emitCounter;
    float _elapsedTime;
    union _GLKVector2 _canvasSize;
    union _GLKVector2 _positionVariance;
    union _GLKVector2 _randomForce;
    union _GLKVector2 _gravity;
    NSString *_textureName;
    NSMutableData *_emitterPositions;
    NSArray *_colors;
    NSArray *_colorPositions;
    GLKTextureInfo *_texture;
    CDStruct_06a10fd4 *_particles;
    CDStruct_99b5c6ec *_quads;
    unsigned short *_indices;
    union _GLKVector4 _startColor;
    union _GLKVector4 _startColorVariance;
    union _GLKVector4 _finishColor;
    union _GLKVector4 _finishColorVariance;
}

@property(nonatomic) float elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) float emitCounter; // @synthesize emitCounter=_emitCounter;
@property(nonatomic) unsigned int verticesID; // @synthesize verticesID=_verticesID;
@property(nonatomic) unsigned int numberOfActiveParticles; // @synthesize numberOfActiveParticles=_numberOfActiveParticles;
@property(nonatomic) unsigned int usedParticleCount; // @synthesize usedParticleCount=_usedParticleCount;
@property(nonatomic) unsigned int allocatedParticleCount; // @synthesize allocatedParticleCount=_allocatedParticleCount;
@property(nonatomic) unsigned short *indices; // @synthesize indices=_indices;
@property(nonatomic) CDStruct_99b5c6ec *quads; // @synthesize quads=_quads;
@property(nonatomic) CDStruct_06a10fd4 *particles; // @synthesize particles=_particles;
@property(retain, nonatomic) GLKTextureInfo *texture; // @synthesize texture=_texture;
@property(retain, nonatomic) NSArray *colorPositions; // @synthesize colorPositions=_colorPositions;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSMutableData *emitterPositions; // @synthesize emitterPositions=_emitterPositions;
@property(copy, nonatomic) NSString *textureName; // @synthesize textureName=_textureName;
@property(nonatomic) float spriteAdvanceRate; // @synthesize spriteAdvanceRate=_spriteAdvanceRate;
@property(nonatomic) unsigned int spriteDimensionCount; // @synthesize spriteDimensionCount=_spriteDimensionCount;
@property(nonatomic) unsigned int blendFuncDestination; // @synthesize blendFuncDestination=_blendFuncDestination;
@property(nonatomic) unsigned int blendFuncSource; // @synthesize blendFuncSource=_blendFuncSource;
@property(nonatomic) _Bool wrapY; // @synthesize wrapY=_wrapY;
@property(nonatomic) _Bool wrapX; // @synthesize wrapX=_wrapX;
@property(nonatomic) float fixedEmissionRate; // @synthesize fixedEmissionRate=_fixedEmissionRate;
@property(nonatomic) float numberOfParticlesPerSource; // @synthesize numberOfParticlesPerSource=_numberOfParticlesPerSource;
@property(nonatomic) float rotationEndVariance; // @synthesize rotationEndVariance=_rotationEndVariance;
@property(nonatomic) float rotationEnd; // @synthesize rotationEnd=_rotationEnd;
@property(nonatomic) float rotationStartVariance; // @synthesize rotationStartVariance=_rotationStartVariance;
@property(nonatomic) float rotationStart; // @synthesize rotationStart=_rotationStart;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) float finishParticleSizeVariance; // @synthesize finishParticleSizeVariance=_finishParticleSizeVariance;
@property(nonatomic) float finishParticleSize; // @synthesize finishParticleSize=_finishParticleSize;
@property(nonatomic) float startParticleSizeVariance; // @synthesize startParticleSizeVariance=_startParticleSizeVariance;
@property(nonatomic) float startParticleSize; // @synthesize startParticleSize=_startParticleSize;
@property(nonatomic) union _GLKVector4 finishColorVariance; // @synthesize finishColorVariance=_finishColorVariance;
@property(nonatomic) union _GLKVector4 finishColor; // @synthesize finishColor=_finishColor;
@property(nonatomic) union _GLKVector4 startColorVariance; // @synthesize startColorVariance=_startColorVariance;
@property(nonatomic) union _GLKVector4 startColor; // @synthesize startColor=_startColor;
@property(nonatomic) float particleLifespanVariance; // @synthesize particleLifespanVariance=_particleLifespanVariance;
@property(nonatomic) float particleLifespan; // @synthesize particleLifespan=_particleLifespan;
@property(nonatomic) union _GLKVector2 gravity; // @synthesize gravity=_gravity;
@property(nonatomic) float randomForceProbability; // @synthesize randomForceProbability=_randomForceProbability;
@property(nonatomic) union _GLKVector2 randomForce; // @synthesize randomForce=_randomForce;
@property(nonatomic) float tangentialAccelerationVariance; // @synthesize tangentialAccelerationVariance=_tangentialAccelerationVariance;
@property(nonatomic) float tangentialAcceleration; // @synthesize tangentialAcceleration=_tangentialAcceleration;
@property(nonatomic) float radialAccelerationVariance; // @synthesize radialAccelerationVariance=_radialAccelerationVariance;
@property(nonatomic) float radialAcceleration; // @synthesize radialAcceleration=_radialAcceleration;
@property(nonatomic) float speedVariance; // @synthesize speedVariance=_speedVariance;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float angleVariance; // @synthesize angleVariance=_angleVariance;
@property(nonatomic) float angle; // @synthesize angle=_angle;
@property(nonatomic) union _GLKVector2 positionVariance; // @synthesize positionVariance=_positionVariance;
@property(nonatomic) unsigned int maxParticles; // @synthesize maxParticles=_maxParticles;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) union _GLKVector2 canvasSize; // @synthesize canvasSize=_canvasSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) float canvasHeight;
@property(readonly, nonatomic) float canvasWidth;
- (void)setupShaders;
- (void)setupArrays;
- (void)loadTexture;
- (void)appendNormalizedSourcePosition:(union _GLKVector2)arg1;
- (void)clearSourcePositions;
- (void)setNormalizedSourcePosition:(union _GLKVector2)arg1;
- (void)parseParticleConfig:(id)arg1;
- (void)initParticle:(CDStruct_06a10fd4 *)arg1 atSourcePosition:(union _GLKVector2)arg2;
- (void)addParticle;
- (CDStruct_06a10fd4 *)addParticleAtPosition:(union _GLKVector2)arg1 scale:(float)arg2;
@property(readonly, nonatomic) float emissionRate;
- (void)render;
- (void)reset;
- (void)stopParticleEmitter;
- (void)updateWithDelta:(float)arg1 strength:(float)arg2;
- (id)initWithSettings:(id)arg1 maxParticles:(unsigned int)arg2 aspectRect:(struct CGRect)arg3 trimHeightPercentage:(float)arg4 flippedYAxis:(_Bool)arg5;
- (void)dealloc;

@end

