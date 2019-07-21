//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSString;

@interface SCADiscoverView : NSObject <NamedEvent, NSCopying>
{
    NSString *publisherName;
    NSString *editionId;
    NSString *dsnapId;
    NSString *hash;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getDsnapId;
- (id)getEditionId;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getHash;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)getPublisherName;
- (void)setDsnapId:(id)arg1;
- (void)setEditionId:(id)arg1;
- (void)setHash:(id)arg1;
- (void)setPublisherName:(id)arg1;

@end

