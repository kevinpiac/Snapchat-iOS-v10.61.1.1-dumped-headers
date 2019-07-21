//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSData, NSString, SCCStoryPlayerPublisherInfo;

@interface SCCStoryPlayerPublisherItem : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSData *_encodedStoryDoc;
    NSData *_encodedWatchedState;
    SCCStoryPlayerPublisherInfo *_publisherInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *encodedStoryDoc; // @synthesize encodedStoryDoc=_encodedStoryDoc;
@property(copy, nonatomic) NSData *encodedWatchedState; // @synthesize encodedWatchedState=_encodedWatchedState;
- (id)initWithEncodedStoryDoc:(id)arg1 encodedWatchedState:(id)arg2 publisherInfo:(id)arg3;
@property(retain, nonatomic) SCCStoryPlayerPublisherInfo *publisherInfo; // @synthesize publisherInfo=_publisherInfo;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

