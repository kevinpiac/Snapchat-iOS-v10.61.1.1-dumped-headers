//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingListLocalConversationsCallback-Protocol.h"

@interface SCArroyoListConversationsCallback : NSObject <SCNMessagingListLocalConversationsCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

- (void).cxx_destruct;
- (id)initWithSucccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2;
- (void)onError:(long long)arg1;
- (void)onListConversationsComplete:(id)arg1;
- (void)onListLocalConversationsComplete:(id)arg1;

@end

