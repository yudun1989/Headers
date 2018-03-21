//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;
@protocol TBFavoriteCategoryItemModel;

@interface TBFavoriteCategoryModel : TBJSONModel
{
    _Bool _isShowTypeName;
    _Bool _isShowDonation;
    NSString *_title;
    NSString *_listID;
    NSString *_shareType;
    NSString *_shareTypeName;
    NSString *_desc;
    NSString *_categoryBgImageUrl;
    NSString *_isSync;
    unsigned long long _totalCount;
    NSString *_coverImgUrl;
    NSString *_snapshotPic;
    NSString *_userId;
    NSString *_userNick;
    NSString *_source;
    NSString *_avatarImageUrl;
    NSMutableArray<TBFavoriteCategoryItemModel> *_itemList;
    NSString *_hasMore;
    NSString *_nextPage;
    NSString *_donationActionUrl;
    NSString *_donationText;
    NSString *_headPic;
    NSString *_templateID;
    unsigned long long _collectCount;
    NSString *_cursor;
}

+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) unsigned long long collectCount; // @synthesize collectCount=_collectCount;
@property(retain, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(retain, nonatomic) NSString *headPic; // @synthesize headPic=_headPic;
@property(retain, nonatomic) NSString *donationText; // @synthesize donationText=_donationText;
@property(retain, nonatomic) NSString *donationActionUrl; // @synthesize donationActionUrl=_donationActionUrl;
@property(nonatomic) _Bool isShowDonation; // @synthesize isShowDonation=_isShowDonation;
@property(retain, nonatomic) NSString *nextPage; // @synthesize nextPage=_nextPage;
@property(nonatomic) _Bool isShowTypeName; // @synthesize isShowTypeName=_isShowTypeName;
@property(retain, nonatomic) NSString *hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableArray<TBFavoriteCategoryItemModel> *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSString *avatarImageUrl; // @synthesize avatarImageUrl=_avatarImageUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *snapshotPic; // @synthesize snapshotPic=_snapshotPic;
@property(retain, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSString *isSync; // @synthesize isSync=_isSync;
@property(retain, nonatomic) NSString *categoryBgImageUrl; // @synthesize categoryBgImageUrl=_categoryBgImageUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *shareTypeName; // @synthesize shareTypeName=_shareTypeName;
@property(retain, nonatomic) NSString *shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)lastItem;
- (id)lastItemCursor;
- (id)lastItemID;

@end

