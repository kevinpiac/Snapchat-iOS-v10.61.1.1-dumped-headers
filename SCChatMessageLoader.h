//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCChatMessageLoaderDelegate;

@interface SCChatMessageLoader : NSObject
{
    id <SCChatMessageLoaderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCChatMessageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadMessageContent:(id)arg1 messageMetadata:(id)arg2 requestContext:(long long)arg3;

@end

