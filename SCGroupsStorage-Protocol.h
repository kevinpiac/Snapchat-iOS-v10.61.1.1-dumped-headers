//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol SCChatGroup;

@protocol SCGroupsStorage <NSObject>
- (id <SCChatGroup>)groupById:(NSString *)arg1;
- (void)putGroup:(id <SCChatGroup>)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)putGroups:(NSDictionary *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)removeGroupById:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
@end
