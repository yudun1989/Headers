//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface AliBUIDetector : NSObject
{
    _Bool _transitionDetectorEnabled;
    NSMutableArray *_pageTransitionListeners;
    CDUnknownBlockType _pageTransitionCreator;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType pageTransitionCreator; // @synthesize pageTransitionCreator=_pageTransitionCreator;
@property(retain, nonatomic) NSMutableArray *pageTransitionListeners; // @synthesize pageTransitionListeners=_pageTransitionListeners;
@property(nonatomic) _Bool transitionDetectorEnabled; // @synthesize transitionDetectorEnabled=_transitionDetectorEnabled;
- (void).cxx_destruct;
- (void)notifyPageTransitionEnd;
- (void)notifyPageTransitionStart;
- (_Bool)unRegisterPageTransitionEventListener:(CDUnknownBlockType)arg1;
- (_Bool)registerPageTransitionEventListener:(CDUnknownBlockType)arg1;
- (void)hookPageTransitionHandlerCreator:(CDUnknownBlockType)arg1;
- (id)pageTransitionHandlerWithEvent:(id)arg1;
- (id)init;

@end

