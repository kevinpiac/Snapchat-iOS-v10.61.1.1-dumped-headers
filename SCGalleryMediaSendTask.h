//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCMediaSendTask;

@interface SCGalleryMediaSendTask : NSObject
{
    _Bool _isStorySend;
    id <SCMediaSendTask> _task;
    long long _snapSendCount;
    long long _storySendCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStorySend; // @synthesize isStorySend=_isStorySend;
@property(nonatomic) long long snapSendCount; // @synthesize snapSendCount=_snapSendCount;
@property(nonatomic) long long storySendCount; // @synthesize storySendCount=_storySendCount;
@property(retain, nonatomic) id <SCMediaSendTask> task; // @synthesize task=_task;

@end

