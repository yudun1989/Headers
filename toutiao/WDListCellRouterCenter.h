//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WDListCellRouterCenter : NSObject
{
}

+ (id)sharedInstance;
- (id)dequeueTableCellForLayoutModel:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 gdExtJson:(id)arg4 apiParams:(id)arg5 pageType:(long long)arg6;
- (double)heightForCellLayoutModel:(id)arg1 cellWidth:(double)arg2;
- (Class)cellClassFromData:(id)arg1 pageType:(long long)arg2;
- (_Bool)canRecgonizeData:(id)arg1;

@end
