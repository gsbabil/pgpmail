/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

@protocol MessageConsumer <NSObject>
- (void)newMessagesAvailable:(id)arg1 conversationsMembersByMessageID:(id)arg2;
- (void)finishedSendingMessages;
- (BOOL)shouldCancel;

@optional
- (void)newMessagesAvailable:(id)arg1 conversationMembers:(id)arg2;
- (id)libraryNotificationObject;
- (id)libraryNotificationMessages;
@end

