//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SCService, SCServiceNotifier;

@interface SCServiceItem : NSObject
{
    id <SCService> _service;
    NSString *_UUID;
    id <SCServiceNotifier> _notifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (id)initWithService:(id)arg1 UUID:(id)arg2;
@property(retain, nonatomic) id <SCServiceNotifier> notifier; // @synthesize notifier=_notifier;
@property(readonly, nonatomic) id <SCService> service; // @synthesize service=_service;

@end

