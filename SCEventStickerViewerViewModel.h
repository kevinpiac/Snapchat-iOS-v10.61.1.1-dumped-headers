//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCEventStickerViewerViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSString *_eventId;
    NSString *_groupId;
    NSString *_groupInviteId;
    NSString *_eventName;
    NSString *_place;
    double _date;
    NSString *_info;
    NSString *_contextBaseUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *contextBaseUrl; // @synthesize contextBaseUrl=_contextBaseUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *groupInviteId; // @synthesize groupInviteId=_groupInviteId;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
- (id)initWithEventId:(id)arg1 groupId:(id)arg2 groupInviteId:(id)arg3 eventName:(id)arg4 place:(id)arg5 date:(double)arg6 info:(id)arg7 contextBaseUrl:(id)arg8;
@property(copy, nonatomic) NSString *place; // @synthesize place=_place;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
