//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface pluginStasticsStruct : NSObject
{
    NSString *_pluginID;
    int _clickPos;
    int _clickRlt;
    unsigned int _uin;
    unsigned int _clickCount;
    int _xo;
}

@property(nonatomic) unsigned int clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) unsigned int uin; // @synthesize uin=_uin;
@property(nonatomic) int clickRlt; // @synthesize clickRlt=_clickRlt;
@property(nonatomic) int clickPos; // @synthesize clickPos=_clickPos;
@property(copy, nonatomic) NSString *pluginID; // @synthesize pluginID=_pluginID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

