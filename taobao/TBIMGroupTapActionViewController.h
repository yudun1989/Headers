//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MCGroupTabActionComponentFragment, NSString;

@interface TBIMGroupTapActionViewController : UIViewController
{
    NSString *_innerTitle;
    NSString *_urlStr;
    MCGroupTabActionComponentFragment *_groupTabActionComponentFragment;
    long long _containerType;
}

@property(nonatomic) long long containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) MCGroupTabActionComponentFragment *groupTabActionComponentFragment; // @synthesize groupTabActionComponentFragment=_groupTabActionComponentFragment;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(retain, nonatomic) NSString *innerTitle; // @synthesize innerTitle=_innerTitle;
- (void).cxx_destruct;
- (void)backItemClicked:(id)arg1;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)setupNavigationBar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

@end
