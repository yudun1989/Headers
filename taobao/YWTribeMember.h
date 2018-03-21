//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWPerson.h"

@class NSString;

@interface YWTribeMember : YWPerson
{
    unsigned long long _role;
    NSString *_nickname;
    NSString *_tribeID;
    NSString *_displayName;
    NSString *_displayNameLatinString;
    NSString *_avatarURLString;
}

@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(copy, nonatomic) NSString *displayNameLatinString; // @synthesize displayNameLatinString=_displayNameLatinString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *tribeID; // @synthesize tribeID=_tribeID;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
- (void).cxx_destruct;
- (id)initWithWWtribeMember:(id)arg1;
- (id)initWithPersonLongId:(id)arg1;

@end

