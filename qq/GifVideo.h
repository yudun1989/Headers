//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/Video.h>

@protocol GifViewAdapterDelegate;

@interface GifVideo : Video
{
    struct GifFileType *gifinfo;
    int transindex;
    int disposal;
    _Bool trans;
    _Bool bestQuality;
    _Bool readingFrame;
    unsigned int current_frame;
    id <GifViewAdapterDelegate> _gifAdapterDelegate;
}

@property(nonatomic) __weak id <GifViewAdapterDelegate> gifAdapterDelegate; // @synthesize gifAdapterDelegate=_gifAdapterDelegate;
- (void).cxx_destruct;
- (struct CGSize)frameSize;
- (void)frameClipScale:(float *)arg1;
- (void)flushState;
- (void)resetState:(_Bool)arg1;
- (_Bool)nextFrame:(struct VideoWorkerFrame_s *)arg1;
- (_Bool)drawFrame:(struct VideoWorkerFrame_s *)arg1 andDisposal:(_Bool)arg2;
- (void)dealloc;
- (id)initWithSource:(struct VideoSource *)arg1 inContext:(id)arg2 gifDelegate:(id)arg3;
- (int)videoType;

@end

