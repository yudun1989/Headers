//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PituGLProgram : NSObject
{
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
    _Bool _initialized;
}

@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (void)dealloc;
- (void)validate;
- (void)use;
- (_Bool)link;
- (unsigned int)uniformIndex:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (void)addAttribute:(id)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 string:(id)arg3;
- (id)initWithVertexShaderFilename:(id)arg1 fragmentShaderFilename:(id)arg2;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;

@end

