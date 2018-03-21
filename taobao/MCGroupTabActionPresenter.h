//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBasePresenter.h"

#import "MCGroupTabActionPresenterProtocol-Protocol.h"

@class NSString, UIView;
@protocol MCGroupTabActionViewProtocol;

@interface MCGroupTabActionPresenter : MCBasePresenter <MCGroupTabActionPresenterProtocol>
{
    UIView<MCGroupTabActionViewProtocol> *_groupTabActionView;
    id _groupTabActionModel;
    NSString *_urlStr;
}

@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(retain, nonatomic) id groupTabActionModel; // @synthesize groupTabActionModel=_groupTabActionModel;
@property(retain, nonatomic) UIView<MCGroupTabActionViewProtocol> *groupTabActionView; // @synthesize groupTabActionView=_groupTabActionView;
- (void).cxx_destruct;
- (id)getView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2 view:(id)arg3 baseVC:(id)arg4 bizKey:(id)arg5 config:(id)arg6 urlStr:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

