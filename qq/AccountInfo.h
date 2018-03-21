//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>

@class NSString;

@interface AccountInfo : NSObject <NSCoding, NSCopying>
{
    unsigned long long _uid;
    NSString *_account;
    NSString *_nick;
    int _type;
}

@property(retain, nonatomic) NSString *_nick; // @synthesize _nick;
@property(nonatomic) int _type; // @synthesize _type;
@property(retain, nonatomic) NSString *_account; // @synthesize _account;
@property(nonatomic) unsigned long long _uid; // @synthesize _uid;
- (void).cxx_destruct;
- (id)initWithUid:(unsigned long long)arg1 Account:(id)arg2 Password:(id)arg3 SavePwd:(_Bool)arg4 Nick:(id)arg5;
- (id)initWithUid:(unsigned long long)arg1 Password:(id)arg2 SavePwd:(_Bool)arg3 AutoLogon:(_Bool)arg4;
- (unsigned long long)NSStringtoNSNumber:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyForPasswordEncrypt;

@end

