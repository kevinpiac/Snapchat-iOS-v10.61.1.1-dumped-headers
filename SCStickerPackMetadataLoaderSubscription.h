//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCStickerPackMetadataLoaderSubscriptionToken;
@protocol OS_dispatch_queue, SCStickerPackMetadataLoaderSubscriber;

@interface SCStickerPackMetadataLoaderSubscription : NSObject
{
    id <SCStickerPackMetadataLoaderSubscriber> _subscriber;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_key;
    SCStickerPackMetadataLoaderSubscriptionToken *_token;
    id <SCStickerPackMetadataLoaderSubscriber> _weakSubscriber;
}

- (void).cxx_destruct;
- (id)initWithSubscriber:(id)arg1 queue:(id)arg2 key:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SCStickerPackMetadataLoaderSubscriber> subscriber; // @synthesize subscriber=_subscriber;
@property(readonly, nonatomic) SCStickerPackMetadataLoaderSubscriptionToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) __weak id <SCStickerPackMetadataLoaderSubscriber> weakSubscriber; // @synthesize weakSubscriber=_weakSubscriber;

@end

