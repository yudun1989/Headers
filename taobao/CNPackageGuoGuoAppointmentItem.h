//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface CNPackageGuoGuoAppointmentItem : TBJSONModel
{
    _Bool _needLogin;
    NSString *_loginUserId;
    NSString *_url;
    NSString *_from;
}

@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(retain, nonatomic) NSString *loginUserId; // @synthesize loginUserId=_loginUserId;
- (void).cxx_destruct;

@end

