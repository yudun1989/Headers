//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APCommonItemProtocol-Protocol.h"

@class NSString;

@interface SUContactActionSheetItemModel : NSObject <APCommonItemProtocol>
{
    long long _actionSheetItemType;
    NSString *_title;
    NSString *_subTitle;
    NSString *_imageURL;
}

@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long actionSheetItemType; // @synthesize actionSheetItemType=_actionSheetItemType;
- (void).cxx_destruct;
- (id)commonTitleDescription;
- (_Bool)isActiveAccount;
- (id)iconUrl;
- (id)commonDetailTitle;
- (id)commonSubTitle;
- (id)commonTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

