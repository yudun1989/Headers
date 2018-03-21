//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseFragment.h"

@class MCChatInputComponentPresenter, MCChatPageDisplayPresenter, NSArray;

@interface MCChatPageDisplayFragment : MCBaseFragment
{
    MCChatPageDisplayPresenter *_chatPageDisplayPresenter;
    MCChatInputComponentPresenter *_chatPageInptuPresenter;
    NSArray *_inputFunctionItemsList;
}

@property(retain, nonatomic) NSArray *inputFunctionItemsList; // @synthesize inputFunctionItemsList=_inputFunctionItemsList;
@property(retain, nonatomic) MCChatInputComponentPresenter *chatPageInptuPresenter; // @synthesize chatPageInptuPresenter=_chatPageInptuPresenter;
@property(retain, nonatomic) MCChatPageDisplayPresenter *chatPageDisplayPresenter; // @synthesize chatPageDisplayPresenter=_chatPageDisplayPresenter;
- (void).cxx_destruct;
- (void)loadDataAndRefreshUI;
- (void)setViewLayout:(id)arg1;
- (id)getConponetViews;
- (id)getContext;
- (id)initWithFrame:(struct CGRect)arg1 bizKey:(id)arg2 baseVC:(id)arg3 sessionID:(id)arg4 config:(id)arg5 inputFunctionItems:(id)arg6;

@end

