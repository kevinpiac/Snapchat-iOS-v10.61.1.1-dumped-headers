//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMessageChatViewModel.h"

@class NSMutableArray;

@interface SCMergedChatViewModel : SCMessageChatViewModel
{
    NSMutableArray *_mutableMessages;
}

- (void).cxx_destruct;
- (_Bool)_isMessageTypeMergeable:(long long)arg1;
- (void)addMessage:(id)arg1;
- (_Bool)canMergeMessage:(id)arg1;
- (_Bool)containsMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)messages;

@end

