//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class KSCachedImageArray, NSDictionary, NSString;

@interface KSMergeVideoOperation : NSOperation
{
    _Bool _enableLeftAudio;
    _Bool _enableRightAudio;
    CDUnknownBlockType _finishedBlock;
    NSString *_leftVideoPath;
    NSString *_rightVideoPath;
    KSCachedImageArray *_leftCachedArray;
    KSCachedImageArray *_rightCachedArray;
    unsigned long long _shape;
    double _fps;
    NSDictionary *_metaInfo;
    struct CGSize _size;
}

@property(retain, nonatomic) NSDictionary *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double fps; // @synthesize fps=_fps;
@property(nonatomic) _Bool enableRightAudio; // @synthesize enableRightAudio=_enableRightAudio;
@property(nonatomic) _Bool enableLeftAudio; // @synthesize enableLeftAudio=_enableLeftAudio;
@property(nonatomic) unsigned long long shape; // @synthesize shape=_shape;
@property(retain, nonatomic) KSCachedImageArray *rightCachedArray; // @synthesize rightCachedArray=_rightCachedArray;
@property(retain, nonatomic) KSCachedImageArray *leftCachedArray; // @synthesize leftCachedArray=_leftCachedArray;
@property(retain, nonatomic) NSString *rightVideoPath; // @synthesize rightVideoPath=_rightVideoPath;
@property(retain, nonatomic) NSString *leftVideoPath; // @synthesize leftVideoPath=_leftVideoPath;
@property(copy, nonatomic) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
- (void).cxx_destruct;
- (id)mergeImage:(id)arg1 toImage:(id)arg2 shape:(unsigned long long)arg3;
- (void)didFinishMerge:(id)arg1;
- (void)main;
- (id)initWithLeftVideoPath:(id)arg1 rightVideoPath:(id)arg2 leftCachedArray:(id)arg3 rightCachedArray:(id)arg4 shape:(unsigned long long)arg5 enableLeftAudio:(_Bool)arg6 enableRightAudio:(_Bool)arg7 fps:(double)arg8 size:(struct CGSize)arg9 metaInfo:(id)arg10;

@end

