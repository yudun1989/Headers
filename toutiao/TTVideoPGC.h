//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface TTVideoPGC : JSONModel
{
    NSString *_userAuthInfo;
    NSString *_avatarUrl;
    NSString *_openUrl;
    NSString *_mediaID;
    NSString *_name;
    NSString *_desc;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
- (void).cxx_destruct;

@end

