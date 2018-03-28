//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAdCanvasBaseCellDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, TTAdCanvasBaseCell, TTAdCanvasFullPicCell;

@interface TTAdCanvasVCDelegate : NSObject <UIScrollViewDelegate, TTAdCanvasBaseCellDelegate>
{
    _Bool _endPull;
    _Bool _inAnimate;
    NSArray *_dataArray;
    NSArray *_cellArray;
    unsigned long long _orientation;
    TTAdCanvasFullPicCell *_animateFullPicCell;
    TTAdCanvasBaseCell *_flagCell;
}

@property(nonatomic) _Bool inAnimate; // @synthesize inAnimate=_inAnimate;
@property(nonatomic) __weak TTAdCanvasBaseCell *flagCell; // @synthesize flagCell=_flagCell;
@property(nonatomic) __weak TTAdCanvasFullPicCell *animateFullPicCell; // @synthesize animateFullPicCell=_animateFullPicCell;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool endPull; // @synthesize endPull=_endPull;
@property(retain, nonatomic) NSArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)scrollViewAnimateToFullPic:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewItemStatusInEnter:(id)arg1;
- (void)scrollViewItemStatus:(id)arg1;
- (void)checkOrientation:(id)arg1;
- (void)canvasCellBreakByEvent;
- (void)canvasCellResumeByEvent;
- (void)canvasCellPauseByEvent;
- (void)canvasCellLivePlay:(id)arg1;
- (void)canvasCellVideoPlay:(id)arg1;
- (void)setUpDelegates;
- (id)initWithCondition:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

