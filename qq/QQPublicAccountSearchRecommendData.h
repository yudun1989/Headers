//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSMutableArray, NSString;

@interface QQPublicAccountSearchRecommendData : QQModel
{
    int _type;
    NSString *_recommendTitle;
    NSMutableArray *_recommendItems;
}

@property(retain, nonatomic) NSMutableArray *recommendItems; // @synthesize recommendItems=_recommendItems;
@property(copy, nonatomic) NSString *recommendTitle; // @synthesize recommendTitle=_recommendTitle;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copy;
- (id)init;

@end

