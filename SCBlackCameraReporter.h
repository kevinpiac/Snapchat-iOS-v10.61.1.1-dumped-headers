//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCManiphestTicketCreator;

@interface SCBlackCameraReporter : NSObject
{
    id <SCManiphestTicketCreator> _ticketCreator;
}

- (void).cxx_destruct;
- (id)causeNameFor:(long long)arg1;
- (void)fileShakeTicketWithCause:(long long)arg1;
- (id)initWithTicketCreator:(id)arg1;
- (void)reportBlackCameraWithCause:(long long)arg1;
@property(retain, nonatomic) id <SCManiphestTicketCreator> ticketCreator; // @synthesize ticketCreator=_ticketCreator;

@end

