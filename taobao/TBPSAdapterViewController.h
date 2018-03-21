//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBNavigationControllerDelegate-Protocol.h"

@class NSString, WVUILoadingBox;
@protocol TBShareServiceProtocol;

@interface TBPSAdapterViewController : TBViewController <TBNavigationControllerDelegate>
{
    id <TBShareServiceProtocol> _shareService;
    WVUILoadingBox *_loadingBox;
    NSString *_paramURLArgs;
    _Bool _naviBarHidden;
}

@property(retain, nonatomic) NSString *paramURLArgs; // @synthesize paramURLArgs=_paramURLArgs;
- (void).cxx_destruct;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)refresh;
- (void)setParamURLObject:(id)arg1 forKey:(id)arg2;
- (id)paramURLForKey:(id)arg1;
- (id)tbpsNavigationController;
- (void)shareContent:(id)arg1;
- (id)shareService;
- (void)hideLoadingBox;
- (void)showLoadingBox:(id)arg1;
- (void)layoutSubviews;
- (void)parseTextFromImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool naviBarHidden; // @synthesize naviBarHidden=_naviBarHidden;
- (void)tbpsAddChildViewController:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

