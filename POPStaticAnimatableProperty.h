//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPAnimatableProperty.h"

@interface POPStaticAnimatableProperty : POPAnimatableProperty
{
    struct {
        id _field1;
        CDUnknownBlockType _field2;
        CDUnknownBlockType _field3;
        double _field4;
    } *_state;
}

- (id)name;
- (CDUnknownBlockType)readBlock;
- (double)threshold;
- (CDUnknownBlockType)writeBlock;

@end

