//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APContactViewControllerDelegate-Protocol.h"

@class NPContactMobilePicker, NSString;

@interface NPContact : NSObject <APContactViewControllerDelegate>
{
    CDUnknownBlockType _callbackBlock;
    NSString *_rightBarTitle;
    NPContactMobilePicker *_mobileContactPicker;
}

@property(retain, nonatomic) NPContactMobilePicker *mobileContactPicker; // @synthesize mobileContactPicker=_mobileContactPicker;
@property(copy, nonatomic) NSString *rightBarTitle; // @synthesize rightBarTitle=_rightBarTitle;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void).cxx_destruct;
- (void)onClick;
- (id)rightBarBtnItemForAPContactController:(id)arg1;
- (void)didSelectAPContactInfos:(id)arg1 controller:(id)arg2;
- (void)didClickBackBtnWithController:(id)arg1;
- (void)didSelectAPContactInfo:(id)arg1 controller:(id)arg2;
- (id)callCombinedContact:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)callAlipayContact:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)callContact:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

