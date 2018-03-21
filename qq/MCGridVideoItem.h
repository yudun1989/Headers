//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSMutableDictionary, NSString, UIImage;

@interface MCGridVideoItem : QQModel
{
    _Bool _preDownload;
    _Bool _resPrepared;
    _Bool _renderFirst;
    _Bool _locationPermission;
    _Bool _isAdvertisement;
    _Bool _popupMenu;
    _Bool _isWatingDanceResource;
    _Bool _isWatingSingleResource;
    int _filter_id;
    int _funcType;
    float _progressSingle;
    float _progressPublic;
    int _minDevicePlatform;
    float _minSystemVersion;
    NSString *_itemID;
    NSString *_resourceURL;
    NSString *_iconURL;
    NSString *_name;
    NSString *_reSourceMD5;
    UIImage *_itemImage;
    long long _resourceType;
    NSString *_itemType;
    NSString *_filterName;
    long long _typeKind;
    long long _activityType;
    long long _businessArea;
    NSMutableDictionary *_tmpItemCurrentDic;
    long long _category;
    NSString *_gestureType;
    NSString *_gestureWording;
    long long _gestureGapCount;
    long long _gestureGapTime;
    NSString *_catagoryID;
    NSString *_openURL;
    NSString *_storeURL;
    NSString *_badgeURL;
    UIImage *_badgeImage;
    NSString *_popupPic;
    NSString *_popupDesc;
    NSString *_popupButton;
    NSString *_popupDesc2;
    NSString *_popupButton2;
    NSString *_btnBgColor;
    NSString *_selectColor;
    NSString *_downloadColor;
}

@property(copy, nonatomic) NSString *downloadColor; // @synthesize downloadColor=_downloadColor;
@property(copy, nonatomic) NSString *selectColor; // @synthesize selectColor=_selectColor;
@property(nonatomic) float minSystemVersion; // @synthesize minSystemVersion=_minSystemVersion;
@property(nonatomic) int minDevicePlatform; // @synthesize minDevicePlatform=_minDevicePlatform;
@property(nonatomic) float progressPublic; // @synthesize progressPublic=_progressPublic;
@property(nonatomic) float progressSingle; // @synthesize progressSingle=_progressSingle;
@property(nonatomic) _Bool isWatingSingleResource; // @synthesize isWatingSingleResource=_isWatingSingleResource;
@property(nonatomic) _Bool isWatingDanceResource; // @synthesize isWatingDanceResource=_isWatingDanceResource;
@property(nonatomic) int funcType; // @synthesize funcType=_funcType;
@property(copy, nonatomic) NSString *btnBgColor; // @synthesize btnBgColor=_btnBgColor;
@property(copy, nonatomic) NSString *popupButton2; // @synthesize popupButton2=_popupButton2;
@property(copy, nonatomic) NSString *popupDesc2; // @synthesize popupDesc2=_popupDesc2;
@property(copy, nonatomic) NSString *popupButton; // @synthesize popupButton=_popupButton;
@property(copy, nonatomic) NSString *popupDesc; // @synthesize popupDesc=_popupDesc;
@property(copy, nonatomic) NSString *popupPic; // @synthesize popupPic=_popupPic;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(copy, nonatomic) NSString *badgeURL; // @synthesize badgeURL=_badgeURL;
@property(nonatomic) _Bool popupMenu; // @synthesize popupMenu=_popupMenu;
@property(copy, nonatomic) NSString *storeURL; // @synthesize storeURL=_storeURL;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(nonatomic) _Bool isAdvertisement; // @synthesize isAdvertisement=_isAdvertisement;
@property(retain, nonatomic) NSString *catagoryID; // @synthesize catagoryID=_catagoryID;
@property(nonatomic) long long gestureGapTime; // @synthesize gestureGapTime=_gestureGapTime;
@property(nonatomic) long long gestureGapCount; // @synthesize gestureGapCount=_gestureGapCount;
@property(copy, nonatomic) NSString *gestureWording; // @synthesize gestureWording=_gestureWording;
@property(copy, nonatomic) NSString *gestureType; // @synthesize gestureType=_gestureType;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSMutableDictionary *tmpItemCurrentDic; // @synthesize tmpItemCurrentDic=_tmpItemCurrentDic;
@property(nonatomic) long long businessArea; // @synthesize businessArea=_businessArea;
@property(nonatomic) _Bool locationPermission; // @synthesize locationPermission=_locationPermission;
@property(nonatomic) long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) long long typeKind; // @synthesize typeKind=_typeKind;
@property(nonatomic) _Bool renderFirst; // @synthesize renderFirst=_renderFirst;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(copy, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(nonatomic) int filter_id; // @synthesize filter_id=_filter_id;
@property(nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) _Bool resPrepared; // @synthesize resPrepared=_resPrepared;
@property(retain, nonatomic) UIImage *itemImage; // @synthesize itemImage=_itemImage;
@property(copy, nonatomic) NSString *reSourceMD5; // @synthesize reSourceMD5=_reSourceMD5;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool preDownload; // @synthesize preDownload=_preDownload;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

