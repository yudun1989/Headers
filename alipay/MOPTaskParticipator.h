//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MOPTaskParticipator : NSObject
{
    _Bool _certified;
    NSString *_userId;
    NSString *_userName;
    NSString *_userLoginId;
    NSString *_userHeadImg;
    NSString *_userZMScore;
    NSString *_roleType;
    double _x;
    double _y;
    NSString *_phoneNumber;
    NSString *_gender;
}

@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool certified; // @synthesize certified=_certified;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(retain, nonatomic) NSString *roleType; // @synthesize roleType=_roleType;
@property(retain, nonatomic) NSString *userZMScore; // @synthesize userZMScore=_userZMScore;
@property(retain, nonatomic) NSString *userHeadImg; // @synthesize userHeadImg=_userHeadImg;
@property(retain, nonatomic) NSString *userLoginId; // @synthesize userLoginId=_userLoginId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

