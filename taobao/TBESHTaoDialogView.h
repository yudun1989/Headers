//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBESDialogView.h"

@class TBEditionPositionInfo;

@interface TBESHTaoDialogView : TBESDialogView
{
    TBEditionPositionInfo *_positionInfo;
}

@property(retain, nonatomic) TBEditionPositionInfo *positionInfo; // @synthesize positionInfo=_positionInfo;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)arg1;
- (void)onClickComfirmButton:(id)arg1;
- (void)layoutViewWithMainLandStatus;
- (void)layoutViewWithHtaoStatus;
- (id)initWithPositionInfo:(id)arg1;

@end

