//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface KingCardConfig : NSObject
{
    double _timeInterval;
    NSString *_message;
    NSString *_contineText;
    NSString *_guideText;
    NSString *_guideURL;
    NSString *_keyWord;
    NSString *_jumpURL;
    NSString *_imageURL;
}

+ (id)kingCardDefaultConfig;
+ (id)parseConfigWithSource:(id)arg1;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(copy, nonatomic) NSString *guideURL; // @synthesize guideURL=_guideURL;
@property(copy, nonatomic) NSString *guideText; // @synthesize guideText=_guideText;
@property(copy, nonatomic) NSString *contineText; // @synthesize contineText=_contineText;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)dealloc;

@end
