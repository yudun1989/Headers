//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, UITableView;

@interface CNTableViewRegisterNibHelper : NSObject
{
    UITableView *_tableView;
    NSMutableArray *_idList;
}

@property(retain, nonatomic) NSMutableArray *idList; // @synthesize idList=_idList;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)addRegister:(id)arg1;
- (void)registerModels:(id)arg1;
- (id)initWithTableView:(id)arg1;

@end

