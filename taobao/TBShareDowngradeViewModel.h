//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBShareDownGradeModel, TBShareDowngradeView;

@interface TBShareDowngradeViewModel : NSObject
{
    TBShareDowngradeView *_downgradeView;
    TBShareDownGradeModel *_model;
}

@property(retain, nonatomic) TBShareDownGradeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TBShareDowngradeView *downgradeView; // @synthesize downgradeView=_downgradeView;
- (void).cxx_destruct;
- (void)cancel;
- (void)gotoOtherApp;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveToAlbum:(id)arg1;
- (void)showDownGradeViewWithModel:(id)arg1;

@end

