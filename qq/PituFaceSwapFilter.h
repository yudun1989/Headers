//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/PituImageFilter.h>

@class NSArray, UIImage;

@interface PituFaceSwapFilter : PituImageFilter
{
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    int filterTextureCoordinateAttribute2;
    int drawMakeupFragUniform;
    unsigned int maskTexture;
    float canvasWidth;
    float canvasHeight;
    unsigned int vetexBuffer;
    unsigned int texCoordBuffer;
    unsigned int faceVertxBuffer;
    unsigned int faceTexCoordBuffer;
    unsigned int faceGrayCoordBuffer;
    float mPituFaceVertices[276];
    float mPituFaceTexCoord[276];
    float mPituGrayTexCoord[276];
    int skinDiffy;
    int skinDiffu;
    int skinDiffv;
    int skiny;
    int skinu;
    int skinv;
    NSArray *_preFacePoints;
    NSArray *_preFriendFacePoints;
    _Bool isFirstFrame;
    UIImage *_maskImage;
    struct AVSkinColor _selfSkinColor;
    struct AVSkinColor _peerSkinColor;
}

@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(nonatomic) struct AVSkinColor peerSkinColor; // @synthesize peerSkinColor=_peerSkinColor;
@property(nonatomic) struct AVSkinColor selfSkinColor; // @synthesize selfSkinColor=_selfSkinColor;
- (void).cxx_destruct;
- (unsigned int)generateTexture:(id)arg1;
- (_Bool)checkIsPointsHasBigChangeWithPoints:(id)arg1 WithPrePoints:(id)arg2;
- (void)renderWithUserTexture:(unsigned int)arg1 userFacePoints:(id)arg2 userTexutreSize:(struct CGSize)arg3 friendTexture:(unsigned int)arg4 friendFacePoints:(id)arg5 friendTextureSize:(struct CGSize)arg6 needSwap:(_Bool)arg7;
- (id)changeFacePoints:(id)arg1;
- (float)distanceFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (struct CGPoint)midBetween:(struct CGPoint)arg1 and:(struct CGPoint)arg2;
- (double)distanceOfPoint:(float *)arg1 andPoint:(float *)arg2;
- (void)setupBaseVBO;
- (void)setupVertexCoordinates:(id)arg1 imageSize:(struct CGSize)arg2 vertexCoords:(float *)arg3;
- (void)setupGrayTextureCoordinates:(id)arg1 imageSize:(struct CGSize)arg2 textureCoords:(float *)arg3;
- (void)setupTextureCoordinates:(id)arg1 imageSize:(struct CGSize)arg2 textureCoords:(float *)arg3;
- (void)setCanvaWidth:(float)arg1 height:(float)arg2;
- (void)setupEnviroment;
- (void)dealloc;
- (id)init;
- (void)getGlError:(long long)arg1;

@end

