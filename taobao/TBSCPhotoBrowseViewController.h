//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSCIKPhotoBrowseViewController.h"

@class TBSCRecommendToolBar;

@interface TBSCPhotoBrowseViewController : TBSCIKPhotoBrowseViewController
{
    CDUnknownBlockType _deleteBlock;
    TBSCRecommendToolBar *_toolBar;
}

+ (_Bool)tbNeedToolbar;
@property(retain, nonatomic) TBSCRecommendToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteButtonClicked:(id)arg1;
- (void)goBackToPreViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

