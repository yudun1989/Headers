//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VSPasterTextureModel : NSObject
{
    _Bool _textureEnable;
    struct ChartletFilter_TexIdStruct _texIds;
    struct __resourceVertexPosition _vertexPostion;
    struct ChartletFilter_TextureCoordinateStruct _texPosition;
}

@property(nonatomic) struct ChartletFilter_TextureCoordinateStruct texPosition; // @synthesize texPosition=_texPosition;
@property(nonatomic) struct __resourceVertexPosition vertexPostion; // @synthesize vertexPostion=_vertexPostion;
@property(nonatomic) struct ChartletFilter_TexIdStruct texIds; // @synthesize texIds=_texIds;
@property(nonatomic) _Bool textureEnable; // @synthesize textureEnable=_textureEnable;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

