//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneModel.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, QZLayoutInfo;

@interface QzoneFeedCellPicture : QzoneModel
{
    long long _photoNum;
    long long _videoNum;
}

+ (id)pictureWithSchema:(id)arg1;
@property(nonatomic) long long videoNum; // @synthesize videoNum=_videoNum;
@property(nonatomic) long long photoNum; // @synthesize photoNum=_photoNum;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) long long actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *actionUrl; // @dynamic actionUrl;
@property(nonatomic) long long albShowmask; // @dynamic albShowmask;
@property(retain, nonatomic) NSString *albumDesc; // @dynamic albumDesc;
@property(retain, nonatomic) NSString *albumID; // @dynamic albumID;
@property(retain, nonatomic) NSString *albumName; // @dynamic albumName;
@property(nonatomic) long long albumNum; // @dynamic albumNum;
@property(nonatomic) long long albumType; // @dynamic albumType;
@property(retain, nonatomic) NSString *albumanswer; // @dynamic albumanswer;
@property(retain, nonatomic) NSString *albumquestion; // @dynamic albumquestion;
@property(nonatomic) long long albumrights; // @dynamic albumrights;
@property(nonatomic) _Bool allowShare; // @dynamic allowShare;
@property(nonatomic) _Bool animationDown; // @dynamic animationDown;
@property(nonatomic) long long animationType; // @dynamic animationType;
@property(nonatomic) long long anonymity; // @dynamic anonymity;
@property(nonatomic) _Bool bAlbum; // @dynamic bAlbum;
@property(retain, nonatomic) NSMutableDictionary *busiParam; // @dynamic busiParam;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSArray *faceList; // @dynamic faceList;
@property(nonatomic) long long faceNum; // @dynamic faceNum;
@property(nonatomic) long long groupCode; // @dynamic groupCode;
@property(nonatomic) long long index; // @dynamic index;
@property(nonatomic) long long individualAlbum; // @dynamic individualAlbum;
@property(retain, nonatomic) QZLayoutInfo *info; // @dynamic info;
@property(nonatomic) long long isShareAlbum; // @dynamic isShareAlbum;
@property(nonatomic) long long isShareAlbumOwner; // @dynamic isShareAlbumOwner;
@property(nonatomic) long long newestupload; // @dynamic newestupload;
@property(nonatomic) long long owner; // @dynamic owner;
@property(retain, nonatomic) NSArray *photoTagList; // @dynamic photoTagList;
@property(retain, nonatomic) NSMutableArray *pictureList; // @dynamic pictureList;
@property(nonatomic) long long uin; // @dynamic uin;
@property(nonatomic) long long uploadNum; // @dynamic uploadNum;

@end

