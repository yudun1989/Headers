//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QQGroupCardUIModel : NSObject
{
    NSArray *_cardArray;
    unsigned int _lat;
    unsigned int _lon;
    NSString *_cityName;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSArray *cardArray; // @dynamic cardArray;
@property(retain, nonatomic) NSString *cityName; // @dynamic cityName;
@property(nonatomic) unsigned int lat; // @dynamic lat;
@property(nonatomic) unsigned int lon; // @dynamic lon;

@end
