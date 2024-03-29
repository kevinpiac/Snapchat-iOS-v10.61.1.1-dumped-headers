//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;
@protocol SCManagedURLProtocol;

@interface SCManagedURL : NSURL
{
    NSString *_key;
    id <SCManagedURLProtocol> _delegate;
}

- (void).cxx_destruct;
- (id)copy;
- (void)dealloc;
- (void)flushMetadata;
- (id)initFileURLWithPath:(id)arg1 key:(id)arg2 delegate:(id)arg3;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)metadata;

@end

