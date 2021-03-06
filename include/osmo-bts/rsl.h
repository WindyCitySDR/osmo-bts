#ifndef _RSL_H
#define _RSL_H

int down_rsl(struct gsm_bts_trx *trx, struct msgb *msg);
int rsl_tx_rf_res(struct gsm_bts_trx *trx);
int rsl_tx_chan_rqd(struct gsm_bts_trx *trx, struct gsm_time *gtime,
		    uint8_t ra, uint8_t acc_delay);
int rsl_tx_est_ind(struct gsm_lchan *lchan, uint8_t link_id, uint8_t *data, int len);

int rsl_tx_chan_act_ack(struct gsm_lchan *lchan, struct gsm_time *gtime);
int rsl_tx_rf_rel_ack(struct gsm_lchan *lchan);

/* call-back for LAPDm code, called when it wants to send msgs UP */
int lapdm_rll_tx_cb(struct msgb *msg, struct lapdm_entity *le, void *ctx);

int rsl_tx_ipac_dlcx_ind(struct gsm_lchan *lchan, uint8_t cause);

struct gsm_lchan *rsl_lchan_lookup(struct gsm_bts_trx *trx, uint8_t chan_nr);

#endif // _RSL_H */

