//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CCard, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface Biz024CardCellViewModel : NSObject
{
    _Bool _isPlaceHolder;
    _Bool _d_ignoreOption;
    NSNumber *_index;
    NSNumber *_total;
    NSString *_actionType;
    NSMutableArray *_commonItemList;
    CCard *_d_ccard;
    NSString *_contentId;
    NSString *_contentType;
    NSString *_contentSource;
    unsigned long long _d_imgCrop;
    double _d_imgHeight;
    double _d_imgWidth;
    NSDictionary *_d_jumpButton;
    unsigned long long _d_textWrap;
    NSString *_d_mainImg;
    NSString *_d_title;
    NSString *_d_subTitle;
    NSString *_d_clickAction;
    unsigned long long _d_actionButtonStatus;
    NSString *_d_selectButtonName;
    NSString *_d_unselectButtonName;
    NSDictionary *_d_moreItem;
    NSString *_d_itemExt;
    NSString *_d_syncBizType;
    NSString *_d_lastUserId;
    NSString *_d_lastUserSceneName;
    NSString *_d_apcontactCommonTitle;
}

@property(retain, nonatomic) NSString *d_apcontactCommonTitle; // @synthesize d_apcontactCommonTitle=_d_apcontactCommonTitle;
@property(retain, nonatomic) NSString *d_lastUserSceneName; // @synthesize d_lastUserSceneName=_d_lastUserSceneName;
@property(retain, nonatomic) NSString *d_lastUserId; // @synthesize d_lastUserId=_d_lastUserId;
@property(retain, nonatomic) NSString *d_syncBizType; // @synthesize d_syncBizType=_d_syncBizType;
@property(retain, nonatomic) NSString *d_itemExt; // @synthesize d_itemExt=_d_itemExt;
@property(retain, nonatomic) NSDictionary *d_moreItem; // @synthesize d_moreItem=_d_moreItem;
@property(retain, nonatomic) NSString *d_unselectButtonName; // @synthesize d_unselectButtonName=_d_unselectButtonName;
@property(retain, nonatomic) NSString *d_selectButtonName; // @synthesize d_selectButtonName=_d_selectButtonName;
@property(nonatomic) unsigned long long d_actionButtonStatus; // @synthesize d_actionButtonStatus=_d_actionButtonStatus;
@property(retain, nonatomic) NSString *d_clickAction; // @synthesize d_clickAction=_d_clickAction;
@property(retain, nonatomic) NSString *d_subTitle; // @synthesize d_subTitle=_d_subTitle;
@property(retain, nonatomic) NSString *d_title; // @synthesize d_title=_d_title;
@property(retain, nonatomic) NSString *d_mainImg; // @synthesize d_mainImg=_d_mainImg;
@property(nonatomic) unsigned long long d_textWrap; // @synthesize d_textWrap=_d_textWrap;
@property(nonatomic) _Bool d_ignoreOption; // @synthesize d_ignoreOption=_d_ignoreOption;
@property(retain, nonatomic) NSDictionary *d_jumpButton; // @synthesize d_jumpButton=_d_jumpButton;
@property(nonatomic) double d_imgWidth; // @synthesize d_imgWidth=_d_imgWidth;
@property(nonatomic) double d_imgHeight; // @synthesize d_imgHeight=_d_imgHeight;
@property(nonatomic) unsigned long long d_imgCrop; // @synthesize d_imgCrop=_d_imgCrop;
@property(retain, nonatomic) NSString *contentSource; // @synthesize contentSource=_contentSource;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) CCard *d_ccard; // @synthesize d_ccard=_d_ccard;
@property(retain, nonatomic) NSMutableArray *commonItemList; // @synthesize commonItemList=_commonItemList;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool isPlaceHolder; // @synthesize isPlaceHolder=_isPlaceHolder;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
- (void).cxx_destruct;

@end

