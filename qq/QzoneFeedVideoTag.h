//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QzoneFeedVideoTag : NSObject
{
    NSString *_logo;
    NSString *_content;
    long long _actiontype;
    NSString *_actionurl;
    long long _scene;
    long long _displaytype;
    NSArray *_beginEndSeconds;
}

@property(retain, nonatomic) NSArray *beginEndSeconds; // @synthesize beginEndSeconds=_beginEndSeconds;
@property(nonatomic) long long displaytype; // @synthesize displaytype=_displaytype;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *actionurl; // @synthesize actionurl=_actionurl;
@property(nonatomic) long long actiontype; // @synthesize actiontype=_actiontype;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;

@end

