//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SCGroupInviteAutocompleteDataSource <NSObject>
- (void)fetchCompletionsForQueryString:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (NSString *)subtitleForCompletionObject:(id)arg1;
- (NSString *)titleForCompletionObject:(id)arg1;
@end

