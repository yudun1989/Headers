//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WXTransitionInfo : NSObject
{
    id _fromValue;
    id _toValue;
    id _perValue;
    NSString *_propertyName;
}

@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(retain, nonatomic) id perValue; // @synthesize perValue=_perValue;
@property(retain, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
- (void).cxx_destruct;

@end

