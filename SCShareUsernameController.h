//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCShareUsernameControllerDelegate;

@interface SCShareUsernameController : NSObject
{
    id <SCShareUsernameControllerDelegate> _delegate;
    long long _source;
}

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 source:(long long)arg2;
- (void)sharePrimaryUsername;
- (void)shareUsername:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

