//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface KS_Liker : NSObject <NSCoding>
{
    NSString *_headurl;
    NSNumber *_user_id;
    NSString *_user_name;
    NSString *_user_sex;
    NSString *_user_text;
}

@property(retain, nonatomic) NSString *user_text; // @synthesize user_text=_user_text;
@property(retain, nonatomic) NSString *user_sex; // @synthesize user_sex=_user_sex;
@property(retain, nonatomic) NSString *user_name; // @synthesize user_name=_user_name;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSString *headurl; // @synthesize headurl=_headurl;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ks_userName;

@end

